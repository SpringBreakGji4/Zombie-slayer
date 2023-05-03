using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode.Components;

namespace Unity.Multiplayer.Samples.Utilities.ClientAuthority{
<<<<<<< HEAD
	[DisallowMultipleComponent]
	public class ClientNetworkTransform : NetworkTransform{
		protected override bool OnIsServerAuthoritative(){
			return false;
		}
	}
=======
 [DisallowMultipleComponent]
 public class ClientNetworkTransform : NetworkTransform{
  protected override bool OnIsServerAuthoritative(){
   return false;
  }
 }
>>>>>>> main
}
