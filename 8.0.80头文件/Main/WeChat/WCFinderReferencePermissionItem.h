@interface WCFinderReferencePermissionItem : NSObject
{
    BOOL _isOn; // +0x8
    int _referenceType; // +0xc
    NSString * _title; // +0x10
}
+ (id)itemFromFinderReferenceInfo:(id)arg1;
- (int)referenceType;
- (void)setReferenceType:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isOn;
- (void)setIsOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
