@interface WCActionSheetItemRedDotInfo : NSObject
{
    unsigned long long _redDotType; // +0x8
    unsigned long long _redDotPosition; // +0x10
}
- (unsigned long long)redDotType;
- (void)setRedDotType:(unsigned long long)arg1;
- (unsigned long long)redDotPosition;
- (void)setRedDotPosition:(unsigned long long)arg1;
@end
