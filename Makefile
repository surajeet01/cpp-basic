.PHONY: clean All

All:
	@echo "----------Building project:[ MultipleInheritance - Debug ]----------"
	@cd "MultipleInheritance" && "$(MAKE)" -f  "MultipleInheritance.mk"
clean:
	@echo "----------Cleaning project:[ MultipleInheritance - Debug ]----------"
	@cd "MultipleInheritance" && "$(MAKE)" -f  "MultipleInheritance.mk" clean
