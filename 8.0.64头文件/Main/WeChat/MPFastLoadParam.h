@interface MPFastLoadParam : NSObject
{
    BOOL _hasItemShowType; // +0x8
    unsigned int _itemShowType; // +0xc
    unsigned int _enterType; // +0x10
    NSString * _urlForReport; // +0x18
    NSData * _coverImageData; // +0x20
}
- (id)description;
- (BOOL)hasItemShowType;
- (void)setHasItemShowType:(BOOL)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (id)urlForReport;
- (void)setUrlForReport:(id)arg1;
- (id)coverImageData;
- (void)setCoverImageData:(id)arg1;
- (void).cxx_destruct;
@end
