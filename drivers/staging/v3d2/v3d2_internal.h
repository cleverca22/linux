struct MemoryReference {
	void *virt;
	dma_addr_t physical;
	unsigned int size;
	unsigned int mmap_count; // includes the main references list, which isnt actually mmap
};
