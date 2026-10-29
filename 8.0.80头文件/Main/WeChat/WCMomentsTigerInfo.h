@interface WCMomentsTigerInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _enabled; // +0x8
    BOOL _sourceEnabled; // +0x9
    WCFinderLiveShareItem * _finderLiveItem; // +0x10
    long long _enterFinderLiveMode; // +0x18
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_sourceEnabled;
+ (void)PBArrayAdd_finderLiveItem;
+ (void)PBArrayAdd_enterFinderLiveMode;
+ (void)initialize;
+ (id)fromXMLParentNode:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)finderLiveSourceName;
- (id)toXML;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)sourceEnabled;
- (void)setSourceEnabled:(BOOL)arg1;
- (id)finderLiveItem;
- (void)setFinderLiveItem:(id)arg1;
- (long long)enterFinderLiveMode;
- (void)setEnterFinderLiveMode:(long long)arg1;
- (void).cxx_destruct;
@end
