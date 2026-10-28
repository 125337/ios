@interface MMIlinkCheckResourceTypeInfo : NSObject
{
    unsigned int _timeStamp; // +0x8
    NSArray * _projectIds; // +0x10
    unsigned long long _type; // +0x18
    NSString * _extInfo; // +0x20
}
- (id)projectIds;
- (void)setProjectIds:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned int)timeStamp;
- (void)setTimeStamp:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
