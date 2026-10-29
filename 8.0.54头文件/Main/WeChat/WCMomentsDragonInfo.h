@interface WCMomentsDragonInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _enabled; // +0x8
    long long _postSource; // +0x10
    WCFinderLiveShareItem * _finderLiveItem; // +0x18
    WCFinderLiveShareItem * _specifiedFinderLiveItem; // +0x20
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_finderLiveItem;
+ (void)PBArrayAdd_postSource;
+ (void)initialize;
+ (id)fromXMLParentNode:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)contentStyle;
- (id)finderLiveSourceName;
- (id)toXML;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (long long)postSource;
- (void)setPostSource:(long long)arg1;
- (id)finderLiveItem;
- (void)setFinderLiveItem:(id)arg1;
- (id)specifiedFinderLiveItem;
- (void)setSpecifiedFinderLiveItem:(id)arg1;
- (void).cxx_destruct;
@end

