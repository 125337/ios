@interface PLzmaSDKItem : NSObject
{
    SharedPtr<plzma::Item> _item; // +0x8
}
- (const void *)itemSPtr;
- (id)path;
- (unsigned int)index;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)packSize;
- (void)setPackSize:(unsigned long long)arg1;
- (unsigned int)crc32;
- (void)setCrc32:(unsigned int)arg1;
- (id)creationDate;
- (void)setCreationDate:(id)arg1;
- (id)accessDate;
- (void)setAccessDate:(id)arg1;
- (id)modificationDate;
- (void)setModificationDate:(id)arg1;
- (BOOL)encrypted;
- (void)setEncrypted:(BOOL)arg1;
- (BOOL)isDir;
- (void)setIsDir:(BOOL)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPath:(id)arg1 andIndex:(unsigned int)arg2;
- (id)initWithItemM:(void *)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

