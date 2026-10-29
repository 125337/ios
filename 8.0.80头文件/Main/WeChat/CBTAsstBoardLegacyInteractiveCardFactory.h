@interface CBTAsstBoardLegacyInteractiveCardFactory : NSObject
+ (id)viewModelForCardWrap:(id)arg1 delegate:(id)arg2;
+ (void)fillCommonCardData:(id)arg1 viewModel:(id)arg2;
+ (id)singleContactBadgeViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)singleContactPickerViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)openChatPickerViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)sendMsgConfirmViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)contactVoipPickerViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)textWithButtonViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)noteViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)singleGroupPickerViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)locationAuthViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)serviceAuthViewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (id)allBoardLegacyViewModelClasses;
@end
