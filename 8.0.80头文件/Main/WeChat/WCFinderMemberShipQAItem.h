@interface WCFinderMemberShipQAItem : NSObject <PBCoding>
{
    unsigned long long _qaType; // +0x8
    NSString * _refAnswerContent; // +0x10
    WCFinderDataItem * _refAnswerObject; // +0x18
    NSMutableArray * _likeList; // +0x20
}
+ (void)PBArrayAdd_qaType;
+ (void)PBArrayAdd_refAnswerContent;
+ (void)PBArrayAdd_refAnswerObject;
+ (void)PBArrayAdd_likeList;
+ (void)initialize;
+ (id)convertFromFinderMemberQAVO:(id)arg1;
- (id)getPBPropertyTable;
- (unsigned long long)qaType;
- (void)setQaType:(unsigned long long)arg1;
- (id)refAnswerContent;
- (void)setRefAnswerContent:(id)arg1;
- (id)refAnswerObject;
- (void)setRefAnswerObject:(id)arg1;
- (id)likeList;
- (void)setLikeList:(id)arg1;
- (void).cxx_destruct;
@end
