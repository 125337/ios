@interface AutoSetRemarkMgr : MMUserService <MMServiceProtocol, IContactMgrExt, IAddressBookMgrExt>
{
    NSMutableDictionary * m_dicMobileRemarkList; // +0x8
    NSMutableDictionary * m_dicStrangerRemarkList; // +0x10
    NSMutableDictionary * m_dicUserAssociateMobileList; // +0x18
    NSMutableDictionary * m_dicStrangerAttributeList; // +0x20
    NSMutableDictionary * m_dicWaitToSetRemark; // +0x28
    ContactRemarkLogic * _remarkLogic; // +0x30
}
+ (id)GetPathOfUserAssociateMobileList;
+ (id)GetPathOfVerifyList;
+ (id)GetPathOfStrangerRemarkList;
+ (id)GetPathOfStrangerAttributeList;
- (id)init;
- (void)LoadData;
- (void)SaveVerifyMobileData;
- (void)SaveMobileData;
- (void)SaveStrangerData;
- (void)AddVerifyUsr:(id)arg1 MobileIdentify:(id)arg2;
- (void)AssociateVerifyMobileUsr:(id)arg1 MobileIdentify:(id)arg2;
- (void)InternalSetStrangerRemark:(id)arg1 Remark:(id)arg2;
- (void)InternalSetStrangerAttribute:(id)arg1 StringValue:(id)arg2;
- (void)InternalSetStrangerAttribute:(id)arg1 ObjValue:(id)arg2;
- (void)SetStrangerRemark:(id)arg1 Remark:(id)arg2;
- (void)SetStrangerAttribute:(id)arg1 AttributeName:(int)arg2 Value:(id)arg3;
- (void)SetStrangerAttributeByName:(id)arg1 AttributeName:(int)arg2 Value:(id)arg3;
- (id)GetStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (void)ClearStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (void)AutoSetStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (void)SetDesc:(id)arg1;
- (id)GetStrangerRemark:(id)arg1;
- (void)SetRemark:(id)arg1;
- (id)getAndClearStrangerRemark:(id)arg1;
- (id)getAndClearMobileIdentify:(id)arg1;
- (id)getAndClearUserAssociateMobileIdentify:(id)arg1;
- (void)clearRemark:(id)arg1;
- (void)autoSetRemark:(id)arg1;
- (void)OnAddressBookLoadedComplete;
- (void)onModifyContact:(id)arg1;
- (void)onModifyContactProcessMoblie:(id)arg1;
- (void)SetUserAssociateMobileIdentify:(id)arg1;
- (void)onModifyContactProcessRemark:(id)arg1;
- (void)onModifyContactProcessDesc:(id)arg1;
- (void)onModifyContactProcessTagName:(id)arg1;
- (void)onModifyContactProcessPhone:(id)arg1;
- (void)onModifyContactProcessCardImage:(id)arg1;
- (id)remarkLogic;
- (void)setRemarkLogic:(id)arg1;
- (void).cxx_destruct;
@end

