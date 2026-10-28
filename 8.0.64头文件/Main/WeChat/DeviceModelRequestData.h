@interface DeviceModelRequestData : MMObject <PBCoding>
{
    unsigned int _m_lastRequestTime; // +0x8
}
+ (void)PBArrayAdd_m_lastRequestTime;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath;
+ (id)loadFromFile;
- (id)getPBPropertyTable;
- (void)updateLastRequestTime;
- (BOOL)isTimeForRequestNewData;
- (id)init;
- (void)saveToCache;
- (unsigned int)m_lastRequestTime;
- (void)setM_lastRequestTime:(unsigned int)arg1;
@end
