@interface OMJRecommendOriginMessage : NSObject
{
    BOOL _overThreshold; // +0x8
    NSString * _originID; // +0x10
    NSString * _tag; // +0x18
}
- (id)initWithBackingInfo:(const void *)arg1;
- (id)description;
- (id)originID;
- (id)tag;
- (BOOL)overThreshold;
- (void).cxx_destruct;
@end
