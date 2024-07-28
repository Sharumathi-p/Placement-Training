import tkinter as tk
def main():
    root = tk.Tk()
    root.title("Basic Window")
    root.geometry("300x200")  # Width x Height
    
    label = tk.Label(root, text="Hello, Tkinter!")
    label.pack(pady=20)
    
    root.mainloop()

if __name__ == "__main__":
    main()
