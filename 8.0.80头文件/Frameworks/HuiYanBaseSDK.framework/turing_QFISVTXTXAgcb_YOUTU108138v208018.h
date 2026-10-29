@interface turing_QFISVTXTXAgcb_YOUTU108138v208018 : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _versionName; // +0x8
    double _timestampOfInstall; // +0x10
    double _timestampOfUpdate; // +0x18
    unsigned long long _execuableSize; // +0x20
    double _timestampOfModification; // +0x28
    NSString * _storeKey; // +0x30
}
+ (id)lastRecordForKey:(id)arg1;
+ (id)checkoutRecordForKey:(id)arg1 shouldResetInstallTimestamp:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (unsigned long long)versionCode;
- (void)markUploaded;
- (id)initWithKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)versionName;
- (void)setVersionName:(id)arg1;
- (double)timestampOfInstall;
- (void)setTimestampOfInstall:(double)arg1;
- (double)timestampOfUpdate;
- (void)setTimestampOfUpdate:(double)arg1;
- (unsigned long long)execuableSize;
- (void)setExecuableSize:(unsigned long long)arg1;
- (double)timestampOfModification;
- (void)setTimestampOfModification:(double)arg1;
- (id)storeKey;
- (void)setStoreKey:(id)arg1;
- (void).cxx_destruct;
@end
