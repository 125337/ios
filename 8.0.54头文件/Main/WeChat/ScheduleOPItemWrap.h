@interface ScheduleOPItemWrap : NSObject <NSCopying>
{
    NSString * _word; // +0x8
    ScheduleOPWrap * _scheduleOpWrap; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)word;
- (void)setWord:(id)arg1;
- (id)scheduleOpWrap;
- (void)setScheduleOpWrap:(id)arg1;
- (void).cxx_destruct;
@end

