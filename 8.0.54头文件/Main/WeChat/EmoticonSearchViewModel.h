@interface EmoticonSearchViewModel : NSObject
{
    int _state; // +0x8
    NSArray * _recommendWraps; // +0x10
}
- (BOOL)onLoading;
- (id)errorTips;
- (id)md5s;
- (int)state;
- (void)setState:(int)arg1;
- (id)recommendWraps;
- (void)setRecommendWraps:(id)arg1;
- (void).cxx_destruct;
@end

