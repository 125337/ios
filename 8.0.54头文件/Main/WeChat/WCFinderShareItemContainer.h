@interface WCFinderShareItemContainer : NSObject <WCFinderShareItemProtocol>
{
    id <WCFinderShareItemProtocol> _detailItem; // +0x8
    NSData * _detailItemData; // +0x10
    unsigned long long _type; // +0x18
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_detailItemData;
+ (void)initialize;
+ (id)shareItemMap;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)chatDesc;
- (id)momentsDesc;
- (double)momentsHeightForMedia:(id)arg1;
- (id)momentsSourceText;
- (id)momentsViewWithWCDataItem:(id)arg1;
- (id)summayText:(id)arg1 sender:(id)arg2 isChatRoom:(BOOL)arg3;
- (id)valueForKey:(id)arg1;
- (id)detailItemData;
- (id)detailItem;
- (BOOL)canWarpMessage;
- (BOOL)isFinderTopicLikeShareType;
- (BOOL)isFinderPOIRelatedType;
- (void)exposeReport:(id)arg1 params:(id)arg2;
- (unsigned long long)getCardType;
- (id)getFeedId;
- (id)getEventId;
- (void)setDetailItem:(id)arg1;
- (void)setDetailItemData:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

