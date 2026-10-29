@interface turing_QFKWVXoQ_YOUTU108138v208018 : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _reported; // +0x8
    long long _scene; // +0x10
    long long _action; // +0x18
    double _timestamp; // +0x20
    turing_QFMjTLhRWAmbZ_YOUTU108138v208018<TSFinalTrackedItem> * _item; // +0x28
    NSMutableDictionary * _externals; // +0x30
    turing_QFLlTcffmaVpzhdeNZgbgg_YOUTU108138v208018 * _reportingStatistics; // +0x38
    turing_QFLlTcffmaVpzhdeNZgbgg_YOUTU108138v208018 * _collectingStatistics; // +0x40
    turing_QFISVTXTXAgcb_YOUTU108138v208018 * _packageInfo; // +0x48
    NSString * _storageUUID; // +0x50
}
+ (BOOL)supportsSecureCoding;
- (unsigned long long)requireType;
- (void)setRequireType:(unsigned long long)arg1;
- (id)features;
- (void)setFeatures:(id)arg1;
- (id)customFeatures;
- (void)setCustomFeatures:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)userIdentifier;
- (void)setUserIdentifier:(id)arg1;
- (unsigned long long)interfaceType;
- (void)setInterfaceType:(unsigned long long)arg1;
- (id)turingMessageTicketID;
- (void)setTuringMessageTicketID:(id)arg1;
- (id)initWithTrackedItem:(id)arg1 scene:(long long)arg2 action:(long long)arg3 timestamp:(double)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (BOOL)reported;
- (void)setReported:(BOOL)arg1;
- (id)externals;
- (void)setExternals:(id)arg1;
- (id)reportingStatistics;
- (void)setReportingStatistics:(id)arg1;
- (id)collectingStatistics;
- (void)setCollectingStatistics:(id)arg1;
- (id)packageInfo;
- (void)setPackageInfo:(id)arg1;
- (id)storageUUID;
- (void)setStorageUUID:(id)arg1;
- (void).cxx_destruct;
@end
