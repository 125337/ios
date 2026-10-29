@interface CdnTicker : NSObject
{
    long long _tickCount; // +0x8
    long long _tickInteval; // +0x10
    id /* block */ _block; // +0x18
}
+ (id)tickerWithInterval:(long long)arg1 block:(id /* block */)arg2;
- (void)tick;
- (void)clearTick;
- (long long)tickCount;
- (void)setTickCount:(long long)arg1;
- (long long)tickInteval;
- (void)setTickInteval:(long long)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

