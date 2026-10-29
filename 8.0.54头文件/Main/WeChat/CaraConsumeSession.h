@interface CaraConsumeSession : NSObject <CaraNativeConsumeSessionBase>
{
    float _stayTimeInterval; // +0x8
    NSString * _username; // +0x10
}
- (id)initWithContact:(id)arg1 stayTimeInterval:(float)arg2;
- (id)zidl;
- (id)username;
- (float)stayTimeInterval;
- (void).cxx_destruct;
@end

