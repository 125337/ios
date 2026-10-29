@interface WCFinderStarterLiveBaseViewModel : NSObject
{
    WCFinderLiveStartePublicModel * _publicModel; // +0x8
}
- (void)setPublicModel:(id)arg1;
- (void)createLivePrepareSuccess:(id /* block */)arg1 failure:(id /* block */)arg2;
- (id)getPOIInfo;
- (void)setPOIInfo:(id)arg1;
- (void)setCurrentTagInfo:(id)arg1;
- (id)getCurrentTagInfo;
- (void)udpateDefaultDescriptionPromptWording;
- (void)setVisibilityMode:(long long)arg1 liveMode:(int)arg2 andIdList:(id)arg3 chatRoomIdList:(id)arg4 visibleUsernameList:(id)arg5 selectedTagNameList:(id)arg6;
- (void)setLiveChargableWithFlag:(int)arg1 liveMode:(int)arg2 chargeUnitPriceInWecoin:(unsigned int)arg3 purchaseLivePreviewType:(long long)arg4 trialTimeHour:(unsigned int)arg5 trialTimeMinute:(unsigned int)arg6 freeOfChargeChatroomIdList:(id)arg7 freeOfChargeUsernameList:(id)arg8 fullFreeOfChargeContactList:(id)arg9 selectedFreeRosterList:(id)arg10 selectedFreeTagList:(id)arg11 memberFree:(BOOL)arg12;
- (void)updateDataItemMedia:(id)arg1;
- (void)udpateDataItemMediaType;
- (void)updateLiveShareItem:(id)arg1;
- (void)updateLiveNoticeList:(id)arg1;
- (void)updateLiveNoticeInfo;
- (void)updateVisibilityMode:(long long)arg1;
- (id)toLiveCreateParamsModel;
- (id)genEventDescObject;
- (void)updateLiveBulletinInfo:(id)arg1;
- (void)checkLoadSelfHeadImg;
- (void)updateCurrentLiveStarterVC:(id)arg1;
- (id)getVisibilityFileIdLists;
- (id)getVisibilityChatRoomIdList;
- (id)getVisibilityUsernameList;
- (id)getSelectedTagNameList;
- (long long)getLiveMode;
- (long long)getLiveSubMode;
- (id)publicModel;
- (void).cxx_destruct;
@end
