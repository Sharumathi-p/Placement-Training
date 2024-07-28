import tkinter as tk
def add_task():
    task = entry.get()
    if task:
        listbox.insert(tk.END, task)
        entry.delete(0, tk.END)
def remove_task():
    selected_task_index = listbox.curselection()
    if selected_task_index:
        listbox.delete(selected_task_index)
def main():
    root = tk.Tk()
    root.title("To-Do List")
    global entry
    entry = tk.Entry(root, width=50)
    entry.pack(pady=10)
    add_button = tk.Button(root, text="Add Task", command=add_task)
    add_button.pack(pady=5)
    global listbox
    listbox = tk.Listbox(root, width=50, height=10)
    listbox.pack(pady=10)
    remove_button = tk.Button(root, text="Remove Task", command=remove_task)
    remove_button.pack(pady=5)
    root.mainloop()
if __name__ == "__main__":
    main()
