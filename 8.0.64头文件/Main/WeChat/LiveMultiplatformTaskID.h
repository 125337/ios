@interface LiveMultiplatformTaskID : NSObject
{
    NSString * _objectID; // +0x8
    NSString * _anchorFinderUsername; // +0x10
}
+ (id)makeWithObjectID:(id)arg1 anchorFinderUsername:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end
