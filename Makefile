.PHONY: clean All

All:
	@echo "----------Building project:[ ConstructorAndOpOverloading - Debug ]----------"
	@cd "ConstructorAndOpOverloading" && "$(MAKE)" -f  "ConstructorAndOpOverloading.mk"
clean:
	@echo "----------Cleaning project:[ ConstructorAndOpOverloading - Debug ]----------"
	@cd "ConstructorAndOpOverloading" && "$(MAKE)" -f  "ConstructorAndOpOverloading.mk" clean
