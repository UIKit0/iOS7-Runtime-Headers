/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, MPTimeMarker;

@interface MPAVItemTimeMarkerEvent : NSObject  {
    MPAVItem *_AVItem;
    MPTimeMarker *_chapterMarker;
    MPTimeMarker *_artworkMarker;
    MPTimeMarker *_URLMarker;
    MPTimeMarker *_closedCaptionMarker;
}

@property(retain) MPAVItem * AVItem;
@property(retain) MPTimeMarker * chapterMarker;
@property(retain) MPTimeMarker * artworkMarker;
@property(retain) MPTimeMarker * URLMarker;
@property(retain) MPTimeMarker * closedCaptionMarker;


- (id)AVItem;
- (id)crossedMarkerOfType:(int)arg1;
- (id)initWithTimeMarkerNotificationUserInfo:(id)arg1;
- (id)closedCaptionMarker;
- (id)URLMarker;
- (id)artworkMarker;
- (id)chapterMarker;
- (void)setClosedCaptionMarker:(id)arg1;
- (void)setURLMarker:(id)arg1;
- (void)setArtworkMarker:(id)arg1;
- (void)setChapterMarker:(id)arg1;
- (void)setAVItem:(id)arg1;
- (void).cxx_destruct;

@end
