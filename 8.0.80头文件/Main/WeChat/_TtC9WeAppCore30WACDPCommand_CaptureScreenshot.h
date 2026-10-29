@interface _TtC9WeAppCore30WACDPCommand_CaptureScreenshot : _TtC9WeAppCore17WACDPCommand_Base
{
     preCheckLoadingWaitingTime; // +0xf8
     loadingWaitingTime; // +0x100
     uiStableWaitingTime; // +0x108
     imageCheckStartTime; // +0x110
     imageCheckEndTime; // +0x118
     imageCheckAttemptCount; // +0x120
     imageCheckProgress; // +0x128
     transitionStartTime; // +0x130
     transitionEndTime; // +0x138
     transitionAfterAppearStartTime; // +0x140
     transitionAfterAppearEndTime; // +0x148
     viewDidAppearStartTime; // +0x150
     viewDidAppearEndTime; // +0x158
     initReadyStartTime; // +0x160
     initReadyEndTime; // +0x168
     loadingToastStartTime; // +0x170
     loadingToastEndTime; // +0x178
     retryCount; // +0x180
     isTimeout; // +0x188
     edgeRatioCheckResults; // +0x190
     captureResult; // +0x198
     loadingStatusCheckStartTime; // +0x1a0
     preCaptureCheckRound; // +0x1a8
     hasLoadingToastBeforeCapture; // +0x1b0
     uiStableSkippedImageSameRetry; // +0x1b1
     skippedWaitWebViewDidAppear; // +0x1b2
     capturedWebViewId; // +0x1b4
     rerunByWebViewChangedAfterCapture; // +0x1b8
}
- (void)runCommandWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
@end
