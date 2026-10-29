@interface QMCSlotData : NSObject
{
    NSString * _slotId; // +0x8
    NSString * _slotType; // +0x10
    NSDictionary * _bizData; // +0x18
}
- (id)initWithSlotId:(id)arg1 slotType:(id)arg2 bizData:(id)arg3;
- (id)slotId;
- (void)setSlotId:(id)arg1;
- (id)slotType;
- (void)setSlotType:(id)arg1;
- (id)bizData;
- (void)setBizData:(id)arg1;
- (void).cxx_destruct;
@end
