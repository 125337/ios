@interface ImageAutoControl : NSObject <PBCoding>
{
    int _m_nDownloadCount; // +0x8
    double _m_douLimitBegin; // +0x10
}
+ (void)PBArrayAdd_m_douLimitBegin;
+ (void)PBArrayAdd_m_nDownloadCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (double)m_douLimitBegin;
- (void)setM_douLimitBegin:(double)arg1;
- (int)m_nDownloadCount;
- (void)setM_nDownloadCount:(int)arg1;
@end
