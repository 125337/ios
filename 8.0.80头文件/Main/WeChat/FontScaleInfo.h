@interface FontScaleInfo : NSObject
{
    NSNumber * _chatScale; // +0x8
    NSNumber * _globalScale; // +0x10
}
+ (id)makeWithChatScale:(id)arg1 globalScale:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)chatScale;
- (void)setChatScale:(id)arg1;
- (id)globalScale;
- (void)setGlobalScale:(id)arg1;
- (void).cxx_destruct;
@end
