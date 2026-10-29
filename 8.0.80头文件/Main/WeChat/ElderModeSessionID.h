@interface ElderModeSessionID : NSObject
{
    NSString * _data; // +0x8
}
+ (id)sharedInstance;
- (id)getElderModeSessionID;
- (void)clearElderModeSessionID;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
