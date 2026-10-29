@interface StandardImageContentCellMetadata : NSObject
{
    unsigned long long _type; // +0x8
    unsigned long long _videoDurationInSeconds; // +0x10
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)videoDurationInSeconds;
- (void)setVideoDurationInSeconds:(unsigned long long)arg1;
@end
