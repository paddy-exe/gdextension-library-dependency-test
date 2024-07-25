extends Node

func _ready() -> void:
	var s : Summator = Summator.new()
	s.add(10)
	s.add(20)
	s.add(30)
	print(s.get_total())
	s.reset()
	
	print(s.add_two(5,12))
	
