@interface WxaLiteAppWidgetEngineIdProvider : NSObject
{
    int _engineId; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (int)engineId;
- (void)setEngineId:(int)arg1;
@end
