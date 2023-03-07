new Vue({
	el: '.app',
	data: {
	  text: '',
	  todos: []
	},
	methods: {
	  addTodo: function() {
		if (this.text.trim() === '') {
		  return;
		}
		this.todos.push({ text: this.text.trim(), completed: false });
		this.text = '';
	  },
	  removeTodo: function(index) {
		this.todos.splice(index, 1);
	  }
	}
  })