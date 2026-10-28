@interface WCAdLookbookCardItem : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _title; // +0x8
    WCMediaItem * _mediaItem; // +0x10
    WCAdCardBtnInfo * _clickActionInfo; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
