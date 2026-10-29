@interface UNNotificationContent (VoIPExIntent)
- (void)createWAVoIPIntentContentWithAvatarBase64Url:(id)arg1 type:(unsigned long long)arg2 remark:(id)arg3 completion:(id /* block */)arg4;
- (void)createVoIPIntentContentWithAvatarBase64Url:(id)arg1 type:(unsigned long long)arg2 remark:(id)arg3 completion:(id /* block */)arg4;
- (id)VoIPNotificationContentWithDuration:(double)arg1 remark:(id)arg2;
- (void)createVoIPIntentContentWithContent:(id)arg1 remark:(id)arg2 isSucceed:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)createVoIPIntentContentWithErrorRemark:(id)arg1 startTime:(double)arg2 completion:(id /* block */)arg3;
- (void)createVoIPIntentContentWithAvatarData:(id)arg1 isLoadedFromNet:(BOOL)arg2 type:(unsigned long long)arg3 startTime:(double)arg4 remark:(id)arg5 completion:(id /* block */)arg6;
- (void)createVoIPIntentContentWithAvatarData:(id)arg1 type:(unsigned long long)arg2 remark:(id)arg3 completion:(id /* block */)arg4;
- (void)createVoIPIntentContentNoAvatarWithType:(unsigned long long)arg1 remark:(id)arg2 completion:(id /* block */)arg3;
- (void)createVoIPIntentContentUsingAudioAvatarWithType:(unsigned long long)arg1 remark:(id)arg2 completion:(id /* block */)arg3;
@end

