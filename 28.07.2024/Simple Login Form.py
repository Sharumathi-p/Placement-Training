import tkinter as tk
def login():
    username = entry_username.get()
    password = entry_password.get()
    if username == "user" and password == "pass":
        label_result.config(text="Login successful")
    else:
        label_result.config(text="Invalid credentials")
def main():
    root = tk.Tk()
    root.title("Login Form")
    tk.Label(root, text="Username").grid(row=0, column=0, padx=10, pady=10)
    tk.Label(root, text="Password").grid(row=1, column=0, padx=10, pady=10)
    global entry_username
    entry_username = tk.Entry(root)
    entry_username.grid(row=0, column=1, padx=10, pady=10)
    global entry_password
    entry_password = tk.Entry(root, show='*')
    entry_password.grid(row=1, column=1, padx=10, pady=10)
    login_button = tk.Button(root, text="Login", command=login)
    login_button.grid(row=2, column=0, columnspan=2, pady=10)
    global label_result
    label_result = tk.Label(root, text="")
    label_result.grid(row=3, column=0, columnspan=2, pady=10)
    root.mainloop()
if __name__ == "__main__":
    main()
