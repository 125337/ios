@interface KFContactCacher : NSObject
{
    WCTTable * _table; // +0x8
    NSString * _brandUsrName; // +0x10
    NSMutableDictionary * _dictOpenId2KFContact; // +0x18
    WCTDatabase * _db; // +0x20
    KFContact * _bindKF; // +0x28
}
- (id)initWithBrandUsrName:(id)arg1 withDB:(id)arg2;
- (void)addOrUpdateKFContact:(id)arg1;
- (void)addOrUpdateKFContactList:(id)arg1;
- (void)deleteKFContact:(id)arg1;
- (void)deleteAllKFContacts;
- (id)getKFContact:(id)arg1 andGetIsContactNeedUpdate:(BOOL *)arg2;
- (void)modifyHeadImgUpdateFlag:(id)arg1 isNeedUpdate:(BOOL)arg2;
- (id)getBindKFContact;
- (void)updateBindKFContact:(id)arg1;
- (id)pathForBindKFContact;
- (id)tableName;
- (void)setHeadImgUpdateFlag:(id)arg1 oldContact:(id)arg2;
- (BOOL)isNeedUpdateKFContactInfo:(id)arg1;
- (void).cxx_destruct;
@end

