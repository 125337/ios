@interface WCAdCombinedGridItemInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    WCMediaItem * _mediaItem; // +0x8
    WCAdCardBtnInfo * _clickActionInfo; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
