@interface WCFinderWebRedDotShowDicInfo : NSObject <PBCoding>
{
    unsigned long long _showType; // +0x8
    unsigned long long _count; // +0x10
    NSString * _title; // +0x18
    NSString * _iconUrl; // +0x20
    NSString * _path; // +0x28
    unsigned long long _clearType; // +0x30
    NSString * _parent; // +0x38
    unsigned long long _objectId; // +0x40
    NSString * _objectNonceId; // +0x48
    NSString * _byPassInfoString; // +0x50
    NSString * _tipsUuid; // +0x58
    unsigned long long _ctrlInfoType; // +0x60
    unsigned long long _businessType; // +0x68
}
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_clearType;
+ (void)PBArrayAdd_parent;
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_byPassInfoString;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_ctrlInfoType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithRedDotShowInfo:(id)arg1 ctrlInfo:(id)arg2;
- (id)genDicFormat;
- (unsigned long long)showType;
- (void)setShowType:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)clearType;
- (void)setClearType:(unsigned long long)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (id)byPassInfoString;
- (void)setByPassInfoString:(id)arg1;
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (unsigned long long)ctrlInfoType;
- (void)setCtrlInfoType:(unsigned long long)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
