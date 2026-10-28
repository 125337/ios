@interface WSEmoticonModel : NSObject
{
    unsigned int _type; // +0x8
    unsigned int _pageNumber; // +0xc
    NSString * _aesKey; // +0x10
    NSString * _docID; // +0x18
    NSString * _encryptUrl; // +0x20
    NSString * _md5; // +0x28
    NSString * _productID; // +0x30
    NSString * _productName; // +0x38
    NSString * _productUrl; // +0x40
    NSString * _thumb; // +0x48
    NSString * _sourceTitle; // +0x50
    NSString * _hevcUrl; // +0x58
    NSString * _hevcMd5; // +0x60
    NSString * _meaning; // +0x68
    NSData * _imgData; // +0x70
    WSSimilarEmotItemView * _weakHolder; // +0x78
}
- (id)emoticonWrap;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)docID;
- (void)setDocID:(id)arg1;
- (id)encryptUrl;
- (void)setEncryptUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)productID;
- (void)setProductID:(id)arg1;
- (id)productName;
- (void)setProductName:(id)arg1;
- (id)productUrl;
- (void)setProductUrl:(id)arg1;
- (id)thumb;
- (void)setThumb:(id)arg1;
- (id)sourceTitle;
- (void)setSourceTitle:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)pageNumber;
- (void)setPageNumber:(unsigned int)arg1;
- (id)hevcUrl;
- (void)setHevcUrl:(id)arg1;
- (id)hevcMd5;
- (void)setHevcMd5:(id)arg1;
- (id)meaning;
- (void)setMeaning:(id)arg1;
- (id)imgData;
- (void)setImgData:(id)arg1;
- (id)weakHolder;
- (void)setWeakHolder:(id)arg1;
- (void).cxx_destruct;
@end
