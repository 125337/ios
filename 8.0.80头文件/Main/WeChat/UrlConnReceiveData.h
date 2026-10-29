@interface UrlConnReceiveData : NSObject <NSCopying>
{
    unsigned int m_uiReceiveTimeStamp; // +0x8
    unsigned int m_uiDataLength; // +0xc
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)m_uiReceiveTimeStamp;
- (void)setM_uiReceiveTimeStamp:(unsigned int)arg1;
- (unsigned int)m_uiDataLength;
- (void)setM_uiDataLength:(unsigned int)arg1;
@end
