@interface WAReportGameRenderItem : WAReportBaseItem
{
    int _canvasType; // +0x8
    int _eventType; // +0xc
    int _eventValue; // +0x10
    long long _gameduration; // +0x18
}
- (id)reportString;
- (int)canvasType;
- (void)setCanvasType:(int)arg1;
- (int)eventType;
- (void)setEventType:(int)arg1;
- (int)eventValue;
- (void)setEventValue:(int)arg1;
- (long long)gameduration;
- (void)setGameduration:(long long)arg1;
@end

