//
//  FKFlickrGroupsJoinRequest.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrGroupsJoinRequestError_RequiredArgumentsMissing = 1,		 /* The group_id or message argument are missing. */
	FKFlickrGroupsJoinRequestError_GroupDoesNotExist = 2,		 /* The Group does not exist */
	FKFlickrGroupsJoinRequestError_GroupNotAvailableToTheAccount = 3,		 /* The authed account does not have permission to view/join the group. */
	FKFlickrGroupsJoinRequestError_AccountIsAlreadyInThatGroup = 4,		 /* The authed account has previously joined this group */
	FKFlickrGroupsJoinRequestError_GroupIsPublicAndOpen = 5,		 /* The group does not require an invitation to join, please use flickr.groups.join. */
	FKFlickrGroupsJoinRequestError_UserMustAcceptTheGroupRulesBeforeJoining = 6,		 /* The user must read and accept the rules before joining. Please see the accept_rules argument for this method. */
	FKFlickrGroupsJoinRequestError_UserHasAlreadyRequestedToJoinThatGroup = 7,		 /* A request has already been sent and is pending approval. */
	FKFlickrGroupsJoinRequestError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrGroupsJoinRequestError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrGroupsJoinRequestError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrGroupsJoinRequestError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrGroupsJoinRequestError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGroupsJoinRequestError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGroupsJoinRequestError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGroupsJoinRequestError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGroupsJoinRequestError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGroupsJoinRequestError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGroupsJoinRequestError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrGroupsJoinRequestError;

/*

Request to join a group that is invitation-only.




*/
@interface FKFlickrGroupsJoinRequest : NSObject <FKFlickrAPIMethod>

/* The NSID of the group to request joining. */
@property (nonatomic, strong) NSString *group_id; /* (Required) */

/* Message to the administrators. */
@property (nonatomic, strong) NSString *message; /* (Required) */

/* If the group has rules, they must be displayed to the user prior to joining. Passing a true value for this argument specifies that the application has displayed the group rules to the user, and that the user has agreed to them. (See flickr.groups.getInfo). */
@property (nonatomic, strong) NSString *accept_rules; /* (Required) */


@end
