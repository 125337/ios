@interface MMKvStatItem : MMObject
{
    unsigned int _logId; // +0x8
    NSString * _seperator; // +0x10
}
- (void)prepareForSerialization;
- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
@end
