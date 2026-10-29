@interface AppmsgExposureUrlInfo : NSObject
{
    unsigned int _itemShowType; // +0x8
    unsigned int _itemShowTypeFrom; // +0xc
    NSString * _url; // +0x10
}
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned int)itemShowTypeFrom;
- (void)setItemShowTypeFrom:(unsigned int)arg1;
- (void).cxx_destruct;
@end

