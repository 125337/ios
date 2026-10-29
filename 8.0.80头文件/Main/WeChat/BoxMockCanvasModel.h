@interface BoxMockCanvasModel : NSObject
{
    NSString * _frameSetName; // +0x8
    NSString * _frameSetData; // +0x10
}
+ (id)makeWithFrameSetName:(id)arg1 frameSetData:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (id)frameSetData;
- (void)setFrameSetData:(id)arg1;
- (void).cxx_destruct;
@end
