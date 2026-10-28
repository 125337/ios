@interface MMLiveUIPerfMonitorRecord : NSObject
{
    NSString * _uniqueKey; // +0x8
    double _startTime; // +0x10
    double _endTime; // +0x18
    double _composeSizePercent; // +0x20
    id /* block */ _composeRectUpdateNotifyCallback; // +0x28
    NSString * _recordDesc; // +0x30
    CGRect _composeRect; // +0x38
}
+ (id)getMonitorObjKey:(id)arg1;
+ (BOOL)isRectArea:(CGRect)arg1 largerThan:(CGRect)arg2;
- (void)initDefaultDatas;
- (void)updateComposeRect:(CGRect)arg1;
- (void)updateComposeSizePercent:(double)arg1;
- (BOOL)startMonitorIfNeed;
- (BOOL)stopMonitorIfNeed;
- (BOOL)isValid;
- (void)clear;
- (id)description;
- (id)getRecordDesc;
- (id)getUniqueKey;
- (CGRect)currPresentFrame;
- (id)rootView;
- (id)uniqueKey;
- (void)setUniqueKey:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (CGRect)composeRect;
- (void)setComposeRect:(CGRect)arg1;
- (double)composeSizePercent;
- (void)setComposeSizePercent:(double)arg1;
- (id /* block */)composeRectUpdateNotifyCallback;
- (void)setComposeRectUpdateNotifyCallback:(id /* block */)arg1;
- (id)recordDesc;
- (void)setRecordDesc:(id)arg1;
- (void).cxx_destruct;
@end
