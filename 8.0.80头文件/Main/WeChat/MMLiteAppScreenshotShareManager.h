@interface MMLiteAppScreenshotShareManager : NSObject
{
    MMLiteAppScreenshotShareConfig * _currentConfig; // +0x8
}
+ (id)sharedInstance;
- (void)setScreenshotShareItems:(id)arg1 instanceId:(unsigned long long)arg2;
- (id)getScreenshotShareItemsForInstanceId:(unsigned long long)arg1;
- (id)getExtraDataForType:(id)arg1 instanceId:(unsigned long long)arg2;
- (BOOL)hasType:(id)arg1 instanceId:(unsigned long long)arg2;
- (BOOL)hasConfigForInstanceId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
