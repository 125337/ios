@interface WCMomentsRabbitInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _enabled; // +0x8
    WCFinderLiveShareItem * _finderLiveItem; // +0x10
    WCFinderLiveShareItem * _specifiedFinderLiveItem; // +0x18
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_finderLiveItem;
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
- (id)finderLiveItem;
- (void)setFinderLiveItem:(id)arg1;
- (id)specifiedFinderLiveItem;
- (void)setSpecifiedFinderLiveItem:(id)arg1;
- (void).cxx_destruct;
@end
