@interface WCAdLookbookBrandNewItem : NSObject <NSCoding, WCAdParserProtocol>
{
    WCMediaItem * _mediaItem; // +0x8
    unsigned long long _zoomTriggerTimestamp; // +0x10
    unsigned long long _zoomDuration; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (unsigned long long)zoomTriggerTimestamp;
- (void)setZoomTriggerTimestamp:(unsigned long long)arg1;
- (unsigned long long)zoomDuration;
- (void)setZoomDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
