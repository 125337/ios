@interface WAAppTaskQualityIssue : MMObject
{
    unsigned int _subType; // +0x8
    unsigned long long _type; // +0x10
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
@end
