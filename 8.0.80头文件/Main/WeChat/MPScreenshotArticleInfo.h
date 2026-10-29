@interface MPScreenshotArticleInfo : NSObject
{
    unsigned int _itemShowType; // +0x8
    unsigned int _idx; // +0xc
    NSString * _imageId; // +0x10
    NSString * _articleUrl; // +0x18
    unsigned long long _bizuin; // +0x20
    unsigned long long _mid; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)imageId;
- (void)setImageId:(id)arg1;
- (id)articleUrl;
- (void)setArticleUrl:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned long long)bizuin;
- (void)setBizuin:(unsigned long long)arg1;
- (unsigned long long)mid;
- (void)setMid:(unsigned long long)arg1;
- (unsigned int)idx;
- (void)setIdx:(unsigned int)arg1;
- (void).cxx_destruct;
@end
