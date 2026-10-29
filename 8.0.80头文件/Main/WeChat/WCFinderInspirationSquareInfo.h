@interface WCFinderInspirationSquareInfo : NSObject <PBCoding>
{
    unsigned long long _inspirationSquareID; // +0x8
    NSString * _inspirationSquareFeedID; // +0x10
    NSString * _inspirationSquareFeedSessionBuffer; // +0x18
    unsigned long long _inspirationSourceScene; // +0x20
}
+ (void)PBArrayAdd_inspirationSquareID;
+ (void)PBArrayAdd_inspirationSquareFeedID;
+ (void)PBArrayAdd_inspirationSquareFeedSessionBuffer;
+ (void)PBArrayAdd_inspirationSourceScene;
+ (void)initialize;
+ (id)fromPBInspirationSquareInfo:(id)arg1;
- (id)getPBPropertyTable;
- (id)convertToPBInfo;
- (BOOL)isValid;
- (unsigned long long)inspirationSquareID;
- (void)setInspirationSquareID:(unsigned long long)arg1;
- (id)inspirationSquareFeedID;
- (void)setInspirationSquareFeedID:(id)arg1;
- (id)inspirationSquareFeedSessionBuffer;
- (void)setInspirationSquareFeedSessionBuffer:(id)arg1;
- (unsigned long long)inspirationSourceScene;
- (void)setInspirationSourceScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
