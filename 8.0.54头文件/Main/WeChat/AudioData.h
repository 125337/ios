@interface AudioData : NSObject <AudioDataRead>
{
    NSData * _m_data; // +0x8
}
- (id)initWithData:(id)arg1;
- (BOOL)readBytes:(unsigned int)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;
- (unsigned int)getLength;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (void).cxx_destruct;
@end

